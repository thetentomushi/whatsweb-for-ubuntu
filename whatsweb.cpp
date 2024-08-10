#include <gtkmm.h>
#include <webkit2/webkit2.h>

class WhatsAppWindow : public Gtk::Window {
public:
    WhatsAppWindow() {
        set_default_size(1024, 768);
        set_title("WhatsApp Web");

        // Create a WebKitWebView
        m_webview = WEBKIT_WEB_VIEW(webkit_web_view_new());

        // Load WhatsApp Web
        webkit_web_view_load_uri(m_webview, "https://web.whatsapp.com/");

        // Create a GtkWidget from the WebKitWebView
        Gtk::Widget* webkit_widget = Glib::wrap(GTK_WIDGET(m_webview));

        // Add the WebKitWebView to the window
        add(*webkit_widget);

        show_all_children();
    }

    virtual ~WhatsAppWindow() {}

private:
    WebKitWebView* m_webview;
};

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

    WhatsAppWindow window;

    return app->run(window);
}
