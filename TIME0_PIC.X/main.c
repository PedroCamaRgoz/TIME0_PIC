/*
 * File:   main.c
 * Author: Pedro
 *
 * Created on 3 de Julho de 2021, 21:09
 */

#include "config.h"
#include <xc.h>
#include "library_shelf.h"
#include "delay.h"

void main(void) 
{
    print.init();
    TM0.init  ();
    
    print.str_position(0,0,"TIMER0:         "); 
    TM0.get(32000);
    
    int t = 0;
    
    while(1)
    {
       
       print.number(0, 11,(signed)   TM0.status(),5);  
          
       if(!TM0.status())TM0.get(32000);  
    }
   
}
