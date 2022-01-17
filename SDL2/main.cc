/*
 * raw pointer - сырой указатель
 * int a;
 * int * p = &a;
 *
 * "smart" pointer - "Умный" указатель
 * std::shared_ptr
 * std::unique_ptr
 * std::weak_ptr
 *
 *Основной цикл программы:
 *     1) Обработка событий, состояния ввода и т.п.
 *     2) Изменение состояния программы
 *     3) Отображение текущего состояния
 *
 *Ограничение перемещения для зелёного квадрата
 */


#include <iostream>
#include <memory>

#include <SDL2/SDL.h>
#include <SDL2/SDL_main.h>

#include "WindowWithRectangles.h"

/*
 *   1) Инкапсуляция
 *      - состояние
 *      - поведение
 * 1.5) Агрегация
 *      - объект может включать в себя другие объекты
 *   2) Наследование
 *   3) Полиморфизм
 *
 *  Области видимости:
 *                         Сам объект       Потомки     Остальные
 *      public                 +               +            +
 *      protected              +               +
 *      private                +
 *
 */

int main(int, char**)
{
	WindowWithRectangles window1;

	std::cout << "Program started!" << std::endl;
	SDL_Init(SDL_INIT_EVERYTHING);

	window1.main_loop();

	std::cout << "Program started!" << std::endl;

	return 0;
}
