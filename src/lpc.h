/*---------------------------------------------------------------------------*\
                                                                           
  FILE........: lpc.h                                                            
  AUTHOR......: David Rowe                                                      
  DATE CREATED: 24/8/09                                                   
                                                                          
  Linear Prediction functions written in C.                                
                                                                          
\*---------------------------------------------------------------------------*/

/*
  Copyright (C) 2009 David Rowe

  All rights reserved.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License version 2, as
  published by the Free Software Foundation.  This program is
  distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
  License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef __LPC__
#define __LPC__

void hanning_window(float Sn[],	float Wn[], int Nsam);
void autocorrelate(float Sn[], float Rn[], int Nsam, int order);
void levinson_durbin(float R[],	float lpcs[], int order);
void inverse_filter(float Sn[], float a[], int Nsam, float res[], int order);
void synthesis_filter(float res[], float a[], int Nsam,	int order, float Sn_[]);
void find_aks(float Sn[], float a[], int Nsam, int order, float *E);
void weight(float ak[],	float gamma, int order,	float akw[]);

#endif