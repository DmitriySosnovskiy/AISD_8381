#pragma once
#include "QString"
#include "QCharRef"
#include "stackelement.h"
class Stack
{
public:
    Stack();
    void add(QChar element);
    QChar take();
    QString getStr(bool isCons = false);
private:
    StackElement* head;
};
