# Реализация библиотеки с геометрическими фигурами

Библиотека предоставляет возможность вывода на экран различных геометрических фигур: круга, прямоугольника, квадрата, треугольника. Интерфейс каждой фигуры включает в себя задание геометрических параметров, положения, цвета и толщины контура. Для вывода фигур на экран были использованы возможности OpenCV.

## Установка
Для установки OpenCV можно исопльзовать пакетный менеджер vcpkg. В этом случае укажите в CMakeLists путь до vcpkg:
set(VCPKG_ROOT "Вставьте путь до vcpkg")

В случае если OpenCV уже установлена, достаточно указать к ней путь:
set(OpenCV_DIR "Путь к OpenCV")


Для установки самой библиотеки перейдите в директорию проекта и выполните следующие команды из командной строки:

```
cmake -S .

cmake --build .

cmake --install .
```

после сборки в папке bin.dbg появится исполняемый .exe файл.


## Описание структуры проекта
```
├── CMakeLists.txt
├── README.md
├── include
│   └── circle.h
│   └── rectangle.h
│   └── shape.h
│   └── triangle.h
├── src
│   ├── circle.cpp
│   └── rectangle.cpp
│   └── shape.cpp
│   └── triangle.cpp
└── tests
    ├── CMakeLists.txt
    └── test.cpp
```
## Описание интерфейса
### Треугольник
2 способа задания - по трем вершинам, по одной вершине и длине трех сторон. Треугольник поддерживает инвариант - сумма длин двух сторон больше длины третьей.
### Круг
Задается центром и радиусом.
### Прямоугольник
Задается левой верхней вершиной и правой нижней вершиной.
### Квадрат
Задается левой верхней вершиной и длиной стороны.

Каждая фигура имеет метод Draw для вывода на экран, SetColor - установка цвета контура, SetThickness - установка толщины контура.
## Результат запуска тестового примера
![](https://github.com/zhuzzzhha/test_task/blob/main/images/photo_2024-03-10_21-07-02.jpg)
