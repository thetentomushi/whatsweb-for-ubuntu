# Whatsweb for Ubuntu

## Install the required libraries
```
sudo apt-get install libgtkmm-3.0-dev libwebkit2gtk-4.0-dev
```

## Compile the program
```
g++ whatsweb.cpp -o whatsweb `pkg-config --cflags --libs gtkmm-3.0 webkit2gtk-4.0`
```
