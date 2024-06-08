# Аналог игры Feeding Frenzy

Реализация игрового проекта: игры подобной Feeding Frenzy по принципу Fish Eat Fish and Grow с основными механизмами и минимальной графикой.

## Алгоритм генерации карты (используется в [widget.cpp](https://github.com/Dzmitry-Leushukou/Fundamentals-of-algorithmization-and-programming/blob/dll/353504/Сильченко%20А.%20А./Курсовая%20работа/widget.cpp) в методе Widget::Widget(QWidget *parent). Применяется там же.
![image](https://github.com/Anna-Silchenko/CourseProject/assets/160415614/f10d62e6-b050-4a4b-b2fc-91e3d1c686c3)

## Алгоритм генерации рыб (используется в [widget.cpp](https://github.com/Dzmitry-Leushukou/Fundamentals-of-algorithmization-and-programming/blob/dll/353504/Сильченко%20А.%20А./Курсовая%20работа/widget.cpp) в методе void Widget::fishes(Fishes *it). Применяется в void QWidget::on_pushButton_clicked().
![image](https://github.com/Anna-Silchenko/CourseProject/assets/160415614/0bbca07a-66f1-43c8-a768-295a939437ff)

## Алгоритм генерации пути (используется в [fishes.cpp](https://github.com/Dzmitry-Leushukou/Fundamentals-of-algorithmization-and-programming/blob/dll/353504/Сильченко%20А.%20А./Курсовая%20работа/fishes.cpp) в методе void Fishes::pathGereration(). Применяется в Widget::fishes(Fishes *it).
![image](https://github.com/Anna-Silchenko/CourseProject/assets/160415614/edce2be7-a3a2-4ac4-8c52-b4c5e5809209)

## Алгоритм поедания (используется в [widget.cpp](https://github.com/Dzmitry-Leushukou/Fundamentals-of-algorithmization-and-programming/blob/dll/353504/Сильченко%20А.%20А./Курсовая%20работа/widget.cpp) в методе bool Widget::eat(). Применяется в void Widget::on_pushButton_clicked().
![image](https://github.com/Anna-Silchenko/CourseProject/assets/160415614/31dca4ec-2144-4ec1-9411-9d4f1346bcf4)


## Алгоритм роста рыбы (используется в [fish.cpp](https://github.com/Dzmitry-Leushukou/Fundamentals-of-algorithmization-and-programming/blob/dll/353504/Сильченко%20А.%20А./Курсовая%20работа/fish.cpp) в методе void Fish::growFish(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget, int i). Применяется в void QWidget::on_pushButton_clicked().
![image](https://github.com/Anna-Silchenko/CourseProject/assets/160415614/46e61372-2ad6-4a34-b783-87de5eacbe0b)
