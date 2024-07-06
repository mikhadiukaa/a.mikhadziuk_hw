#include <iostream>
#include "dice.h"
int main(){
int score_1 = 0;
int score_2 = 0;
for(int i=0; i < 100; i++){
if (i%2 == 0){
score_1 += dice_1();
}
else{
score_2 +=dice_1();
}
std::cout << "Step:" << i + 1 << "; Player 1: " << score_1 << "; Player 2: " << score_2 << std::endl;
if ((score_1>= 50) || (score_2 >= 50)){
if (score_1 > score_2){
std::cout << "Player 1 won" << std::endl;
}
else if (score_1 < score_2){
    std::cout << "Player 2 won" << std::endl;
}
else{
    std::cout << "Drawn game" << std::endl;
}
break;
}
if (i==99){
if ((score_1<50)&&(score_2<50)){
    std::cout << "Drawn game" << std::endl;
}
}
}


return 0;
}
