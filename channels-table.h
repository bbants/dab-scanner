#
/*
 *    Copyright (C) 2013, 2014, 2015, 2016, 2017, 2018, 2019
 *    Jan van Katwijk (J.vanKatwijk@gmail.com)
 *    Lazy Chair Computing
 *
 *    This file is part of the dab-scanner
 *    dab-scanner is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    dab-scanner is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with dab-scanner; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef	__CHANNELS_TABLE__
#define	__CHANNELS_TABLE__

#include	<QSettings>
#include	<QTableWidget>
#include	<QObject>
#include	"band-handler.h"

class	RadioInterface;

class	channelsTable: public QObject {
Q_OBJECT
public:
	channelsTable	(QSettings *si,
	                 RadioInterface *, bandHandler	*theBand);
	~channelsTable	();
void	show		();
void	hide		();
bool	channel		(int);

public	slots:
       void            cellSelected            (int, int);

private:
	QSettings	*theSettings;
	RadioInterface	*myRadioInterface;
	bandHandler	*theBand;
	QTableWidget	theTable;
	bool		isVisible;
};

#endif
