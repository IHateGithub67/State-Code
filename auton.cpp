#include "main.h"
#include "api.h"
#include "auton.h"

bool MogoToggle = false;

void autonomous() {

    FrontLeft.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    MidLeft.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    BackLeft.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    FrontRight.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    MidRight.set_brake_mode(E_MOTOR_BRAKE_HOLD);
    BackRight.set_brake_mode(E_MOTOR_BRAKE_HOLD);

    /*

    if(MogoToggle == false){
        Mogo.set_value(true);
        MogoToggle = true;
    }
    MoveBackward(30);
    delay(500);
    ResetDrive();
    if(MogoToggle == true){
        Mogo.set_value(false);
        MogoToggle = false;
    }
    IntakeRing(127);
    delay(900);
    ResetIntake();
    MoveBackward(50);
    delay(390);
    ResetDrive();
    TurnRight(75);
    delay(350);
    ResetDrive();
    delay(100);
    MoveForward(40);
    IntakeRing(127);
    delay(1600);
    ResetDrive();

    */

   IntakeRing(127);
   delay(500);
   ResetIntake();
   MoveForward(50);
   delay(600);
   ResetDrive();
   TurnRight(65);
   delay(490);
   ResetDrive();
    MoveBackward(35);
    delay(1400);
    ResetDrive();
    if(MogoToggle == false){
        Mogo.set_value(true);
        MogoToggle = true;
    }
    TurnRight(65);
    delay(800);
    ResetDrive();
    MoveForward(25);
    IntakeRing(127);
    delay(3700);
    ResetDrive();
    delay(1600);
    TurnLeft(65);
    delay(750);
    ResetDrive();
    MoveForward(60);
    delay(2000);
    ResetDrive();
    delay(500);
    TurnLeft(65);
    delay(400);
    ResetDrive();
    MoveBackward(65);
    delay(2000);
    ResetDrive();
    if(MogoToggle == true){
        Mogo.set_value(false);
        MogoToggle = false;
    }
    MoveForward(65);
    delay(800);
    ResetDrive();

    
    



}