#!/bin/bash
g++ main.cpp -o my_app `pkg-config --cflags --libs gtkmm-3.0`
