#include <string>
#include <iostream>
#include "snowman.hpp"
using namespace std;

namespace ariel {
   int isLegit(int numi){
        int num=numi;
        int x=1;
        if ((num<mn)||(num>mx))
        {
        return 0;
        }
        for(int i=0;i<digi;i++){
        if (num%divi>4||num%divi<1)
        {
        x=0;
        } 
        num=num/divi;
        }
        return x;
    }
    string snowman(int num) {
        string snowman;
        string hat;
        string nose;
        string leftEye;
        string rightEye;
        string leftArm;
        string rightArm;
        string torso;
        string base;
        string leftArmUp;
        string rightArmUp;
        if(isLegit(num)==0){throw out_of_range("invaild input");}
    
        rightArmUp=leftArmUp=leftArm=rightArm=" ";
        if(num%divi==1){
            base="( : )";
        }
        if(num%divi==2){
            base="(\" \")";
        }
        if(num%divi==3){
            base="(___)";
        }
        if(num%divi==4){
            base="(   )";
        }
        num=num/divi;
        //pick the right torso
        if(num%divi==1){
            torso="( : )";
        }
        if(num%divi==2){
            torso="(] [)";
        }
        if(num%divi==3){
            torso="(> <)";
        }
        if(num%divi==4){
            torso="(   )";
        }
        num=num/divi;
        //pick right arm
        if(num%divi==1){
            rightArm=">";
        }
        if(num%divi==2){
            rightArmUp="/";
        }
        if(num%divi==3){
            rightArm="\\";
        }
        if(num%divi==4){
            rightArm=" ";
        }
        num=num/divi;
        //picks left arm
        if(num%divi==1){
            leftArm="<";
        }
        if(num%divi==2){
            leftArmUp="\\";
        }
        if(num%divi==3){
            leftArm="/";
        }
        if(num%divi==4){
            leftArm=" ";
        }
        num=num/divi;
        //picks the right eye
        if(num%divi==1){
            rightEye=".)";
        }
        if(num%divi==2){
            rightEye="o)";
        }
        if(num%divi==3){
            rightEye="O)";
        }
        if(num%divi==4){
            rightEye="-)";
        }
        num=num/divi;
        //picks the left eye
        if(num%divi==1){
            leftEye="(.";
        }
        if(num%divi==2){
            leftEye="(o";
        }
        if(num%divi==3){
            leftEye="(O";
        }
        if(num%divi==4){
            leftEye="(-";
        }
        num=num/divi;
        //picks the nose/mouth
        if(num%divi==1){
            nose=",";
        }
        if(num%divi==2){
            nose=".";
        }
        if(num%divi==3){
            nose="_";
        }
        if(num%divi==4){
            nose=" ";
        }
        num=num/divi;
        //picks the the hat
        if(num%divi==1){
            hat="     \n_===_";
        }
        if(num%divi==2){
            hat=" ___ \n.....";
        }
        if(num%divi==3){
            hat="  _  \n /_\\ ";
        }
        if(num%divi==4){
            hat=" ___ \n(_*_)";
        }
    //connects all the snowman parts 
        snowman=hat + "\n" + leftArmUp + leftEye + nose + rightEye +  rightArmUp + "\n" + leftArm + torso + rightArm + "\n" + base;
        return snowman;
    }
}