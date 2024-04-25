#include<iostream>
#include <thread>
using namespace std;

bool finish = false;
void Plus() {
    while (!finish)
    {
        cout << "+ ";
        this_thread::sleep_for(1s);
    }
}
void Minus() {
    while (!finish)
    {
        cout << "- ";
        this_thread::sleep_for(1s);
    }
}
void main()
{
    setlocale(LC_ALL, "");
    //Plus();
    //Minus();
    thread plus_thr(Plus);
    thread minus_thr(Minus);
    cin.get();
    finish = true;
    minus_thr.join();
    plus_thr.join();
    if (minus_thr.joinable())
    {
        minus_thr.join();
    }
    if (plus_thr.joinable())
    {
        plus_thr.join();
    }
}