#include <deque>
#include <iostream>
#include <utility>
#include <conio.h>

struct Food{ // make public struct for food
    std::pair<int, int> locate = {5,5};


};
void PrintRule(){ // print key for moving
    std::cout << "Move : W A S D\n";
    std::cout << "Esc - exit\n";
}

void PrintLocate(std::deque<std::pair<int,int>>& s){ // print where is snake

    std::cout << "Head: ";
    for (auto& seg : s){
        std::cout << "[" << seg.first << "," << seg.second << "]";
}
    std::cout << " :Tail \n";
}

 void Eat(std::deque<std::pair<int,int>>& s , Food& f){ // eating apple
    s.push_front(f.locate);
    PrintLocate(s);
        
}

void MoveSnake(std::deque<std::pair<int,int>>& s , Food& f){ // moving logic 
    auto head = s.front();

        while(true){

            if(_kbhit()){

                char key = _getch();

                switch(key){

                    case 'w':
                    head = {head.first, head.second - 1};
                    break;
                    case 's':
                    head = {head.first, head.second + 1};
                    break;
                    case 'a':
                    head = {head.first - 1, head.second};
                    break;
                    case 'd':
                    head = {head.first + 1, head.second };
                    break;
                    case 27:
                    std::cout << "Bye";
                    return;
                }

                if (head.first == f.locate.first && head.second == f.locate.second){
                    Eat(s,f);
                }
                else{
                s.push_front(head);
                s.pop_back();
                PrintLocate(s);
            }
        }
        }
    }

int main (){
    Food Apple;
    std::deque<std::pair<int,int>> snake;
    snake.push_back({0,0});
     snake.push_back({1,0});
      snake.push_front({-1,0});
      PrintRule();
      std::cout << "\n";
    PrintLocate(snake);
    MoveSnake(snake, Apple);
    return 0;
}

