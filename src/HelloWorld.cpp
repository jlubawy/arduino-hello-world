/**
 * HelloWorld.cpp - Arduino Hello World Example
 * Copyright (C) 2016 Josh Lubawy <jlubawy@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <SoftwareSerial.h>

#include <Arduino.h>

/******************************************************************************
                                    Defines
******************************************************************************/
/*****************************************************************************/


/******************************************************************************
                                     Types
******************************************************************************/
/*****************************************************************************/


/******************************************************************************
                                Local Variables
******************************************************************************/
/*****************************************************************************/


/******************************************************************************
                                Local Functions
******************************************************************************/
/*****************************************************************************/



/******************************************************************************
                                   Functions
******************************************************************************/
/*****************************************************************************/
void
setup( void )
{
    Serial.begin( 9600, SERIAL_8N1 );
    Serial.println( "Hello World" );
}


/*****************************************************************************/
void
loop( void )
{
    /* does nothing, but need to run past loop for Serial to finish in setup */
}
