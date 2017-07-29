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
// Filename: wdi_game.h
//
// Description:
//
///////////////////////////////////////////////////////////////////////////////
 
#ifndef WDI_GAME_H 
#define WDI_GAME_H 

#linklibrary "wdi_game"

///////////////////////////////////////////////////////////////////////////////
//  Definitions
///////////////////////////////////////////////////////////////////////////////

// Default reset countdown time.
#define RESET_COUNTDOWN_TIME	5

// Default safety countdown time.
#define SAFETY_COUNTDOWN_TIME	30

// The amount of seconds a tip is shown on the screen.
#define TIP_COUNTDOWN_TIME		10

// Maximum amount of seconds to wait during the reset countdown.
#define MAX_RESET_TIME			10

// Minimum amount of seconds to wait during the reset countdown.
#define MIN_RESET_TIME			3

// Maximum amount of seconds to wait during the safety countdown.
#define MAX_SAFETY_TIME 		60

// Minimum amount of seconds to wait during the safety countdown.
#define MIN_SAFETY_TIME			5

///////////////////////////////////////////////////////////////////////////////
//  Enums
///////////////////////////////////////////////////////////////////////////////

enum EGameMode
{
	GAMEMODE_CLASSIC,			// One murderer chosen.
	GAMEMODE_DUALCOOP,			// Two murderers chosen who cooperate.
	GAMEMODE_DUALVERSUS,		// Two murderers chosen who must kill each other.
	
	NUM_GAMEMODES				// The number of gamemodes.
};

///////////////////////////////////////////////////////////////////////////////

enum EGameSkill
{
	GAMESKILL_EASY,				// Easy difficulty.
	GAMESKILL_NORMAL,			// Normal difficulty.
	GAMESKILL_HARD,				// Hard difficulty.
	GAMESKILL_MERCILESS,		// Merciless difficulty.
	GAMESKILL_HOPELESS,			// Hopeless difficulty.
	
	NUM_GAMESKILLS				// The number of difficulties.
};

///////////////////////////////////////////////////////////////////////////////

enum EGameState
{
	GAMESTATE_WAITFORPLAYERS,	// The game is waiting for players to join.
	GAMESTATE_RESETCOUNTDOWN,	// The game is about to restart.
	GAMESTATE_SAFETYCOUNTDOWN,	// The game is in safety mode.
	GAMESTATE_MURDERCHOOSE,		// The game is choosing a murderer.
	GAMESTATE_GAMEACTIVE,		// The game is active.
	GAMESTATE_GAMEOVER			// The game is over.
};

///////////////////////////////////////////////////////////////////////////////

enum EGameEnding
{
	GAMEEND_NONE,				// No ending has been determined yet.
	GAMEEND_MURDERWIN,			// The murderer won; all innocents are dead.
	GAMEEND_MURDERLOSE,			// The murderer lost; killed in action.
	GAMEEND_MURDERSUICIDE,		// The murderer lost; ran out of sanity.
	GAMEEND_MURDERLEFT,			// The murderer lost; disconnected the game.
	GAMEEND_CUSTOM				// Custom defined ending.
};

///////////////////////////////////////////////////////////////////////////////
//  Prototypes
///////////////////////////////////////////////////////////////////////////////

extern int WDI_GetGameState(void);
extern int WDI_GetGameEnding(void);

#endif