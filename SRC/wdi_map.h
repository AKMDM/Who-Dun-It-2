///////////////////////////////////////////////////////////////////////////////
//
// Who Dun It Source Code
// Copyright (C) 2010-2017 by Who Dun It Development Team
// All rights reserved.
//
// Permission to use, copy, modify, and distribute this software and its
// documentation for any purpose and without fee is hereby granted,
// provided that the above copyright notice appear in all copies and that
// both that copyright notice and this permission notice appear in
// supporting documentation.
//
// THE AUTHOR PROVIDES THIS SOFTWARE ''AS IS'' AND ANY EXPRESSED OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Filename: wdi_map.h
//
// Description:
//
///////////////////////////////////////////////////////////////////////////////
 
#ifndef WDI_MAP_H 
#define WDI_MAP_H 

#linklibrary "wdi_map"

///////////////////////////////////////////////////////////////////////////////
//  Structures
///////////////////////////////////////////////////////////////////////////////

struct WDIMap
{
	// The name of the map.
	str m_sName;
	
	// The alternative name of the map, used for the title splah.
	str m_sAlternateName;
	
	// The name of the map lump.
	str m_sLevel;
	
	// The author(s) of the map.
	str m_sAuthor;
	
	// A brief description about the map.
	str m_sDescription;
	
	// The name of the image used to represent the map on the vote screen.
	str m_sImageName;
	
	// The number of rounds the map has been played.
	int m_nRoundsPlayed;
	
	// The number of rounds the map was blacklisted from a vote.
	int m_nRoundsBlacklist;
	
	// The number of rounds the map was last nominated in a vote.
	int m_nRoundsLastNominated;
	
	// How many times the innocent(s) have won this map.
	int m_nInnocentWins;
	
	// How many times the murderer(s) have won this map.
	int m_nMurdererWins;
}

///////////////////////////////////////////////////////////////////////////////
//  Prototypes
///////////////////////////////////////////////////////////////////////////////

extern global WDIMap 1:g_MapList[];

///////////////////////////////////////////////////////////////////////////////

#endif