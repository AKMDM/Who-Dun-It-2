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
// Filename: wdi_vote.h
//
// Description:
//
///////////////////////////////////////////////////////////////////////////////
 
#ifndef WDI_VOTE_H 
#define WDI_VOTE_H 

#linklibrary "wdi_vote"

///////////////////////////////////////////////////////////////////////////////
//  Definitions
///////////////////////////////////////////////////////////////////////////////

// The amount of seconds for the vote to countdown.
#define VOTE_COUNTDOWN_TIME			30

// The amount of seconds to wait after the vote is over.
#define VOTE_PASSED_TIME			5

// The number of columns to draw on the vote screen.
#define VOTE_TABLE_COLUMNS			3

// The number of rows to draw on the vote screen.
#define VOTE_TABLE_ROWS				2

///////////////////////////////////////////////////////////////////////////////
//  Enums
///////////////////////////////////////////////////////////////////////////////

enum EVoteState
{
	VOTESTATE_NOVOTE,			// No vote has started yet.
	VOTESTATE_INPROGRESS,		// The vote is currently receiving votes.
	VOTESTATE_VOTEOVER			// The vote is over and has a result. 
};

///////////////////////////////////////////////////////////////////////////////

enum EVoteEntryType
{
	VOTEENTRY_MAPONE,			// First map entry.
	VOTEENTRY_MAPTWO,			// Second map entry.
	VOTEENTRY_MAPTHREE,			// Third map entry.
	VOTEENTRY_MAPFOUR,			// Fourth map entry.
	VOTEENTRY_MAPFIVE,			// Fifth map entry.
	VOTEENTRY_MAPSIX,			// Sixth map entry.
	VOTEENTRY_RANDOM,			// Random entry.
	VOTEENTRY_REFRESH,			// Refresh entry.
	VOTEENTRY_REPLAY,			// Replay entry.
	
	NUM_VOTEENTRIES = 9,		// Number of entries available.
	NUM_MAPENTRIES = 6;			// Number of map entries available.
};

///////////////////////////////////////////////////////////////////////////////
//  Prototypes
///////////////////////////////////////////////////////////////////////////////

extern void WDI_UpdateVoteList(void);
extern void WDI_UpdateVoteBlacklist(void);

extern void WDI_SelectMapEntries(void);

#endif