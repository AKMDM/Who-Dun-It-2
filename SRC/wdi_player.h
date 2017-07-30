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
// Filename: wdi_player.h
//
// Description:
//
///////////////////////////////////////////////////////////////////////////////
 
#ifndef WDI_PLAYER_H 
#define WDI_PLAYER_H 

#linklibrary "wdi_player"

///////////////////////////////////////////////////////////////////////////////
//  Definitions
///////////////////////////////////////////////////////////////////////////////

// How many players that a game can support.
#define MAX_PLAYERS				32

// The TID of the first player.
#define TID_PLAYER				600

// The TID of the corpse that belongs to the first player.
#define TID_PLAYER_CORPSE		700

// The number of seconds to wait between each time the player heals, if hurt.
#define HEALTH_REGENERATE_TIME	70

///////////////////////////////////////////////////////////////////////////////
//  Enumerations
///////////////////////////////////////////////////////////////////////////////

enum EPlayerState
{
	PLAYERSTATE_UNSPAWNED,		// Not in the game or disconnected.
	PLAYERSTATE_ALIVE,			// Alive and playing.
	PLAYERSTATE_DEAD,			// Dead and spectating.
	PLAYERSTATE_REVIVED			// Resurrected by cheats.
};

///////////////////////////////////////////////////////////////////////////////

enum EPlayerGender
{
	PLAYERGENDER_MALE,			// Player is a male.
	PLAYERGENDER_FEMALE,		// Player is a female.
	PLAYERGENDER_OTHER			// No specific gender.
};

///////////////////////////////////////////////////////////////////////////////

enum EPlayerVoice
{
	PLAYERVOICE_THICK,			// Player is using a thick voice.
	PLAYERVOICE_WIMPY,			// Player is using a wimpy voice.
	
	NUM_PLAYERVOICES
};

///////////////////////////////////////////////////////////////////////////////
//  Structures
///////////////////////////////////////////////////////////////////////////////

struct WDIPlayer
{
	// The TID of the player.
	int m_iTID;
	
	// The TID of the player's corpse.
	int m_iCorpseTID;
	
	// The TID of the camera that the player is viewing from.
	int m_iCameraTID;
	
	// Current input from the player.
	int m_iInput;
	
	// Input from the previous tic.
	int m_iOldInput;
	
	// The state of the player.
	int m_iPlayerState;
	
	// The state of the player's paranoia.
	int m_iParanoidState;
	
	// The type of aura that's bound the player, if paranoid.
	int m_iParanoidType;
	
	// The amount of health the player has left.
	int m_iHealth;

	// The maximum amount of health the player can have.
	int m_iMaxHealth;
	
	// The amount of stamina the player has left.
	int m_iStamina;
	
	// The maximum amount of stamina the player can have.
	int m_iMaxStamina;
	
	// The player's position on the map.
	fixed m_fPosX;
	fixed m_fPosY;
	fixed m_fPosZ;

	// The player's velocity.
	fixed m_fVelX;
	fixed m_fVelY;
	fixed m_fVelZ;
	
	// The player's velocity, relative to the front and side of the player.
	fixed m_fVelForward;
	fixed m_fVelSide;
	
	// The overall speed of the player.
	fixed m_fSpeed;
	
	// The player's orientation.
	fixed m_fAngle;
	fixed m_fPitch;
	
	// The player is a murderer.
	bool m_bIsMurderer;
}

///////////////////////////////////////////////////////////////////////////////

struct WDIPlayerInfo
{
	// The name of the player.
	str m_sName;
	
	// A list of the previous names the player used, up to 5 old names.
	str m_sOldNames[5];
	
	// A list of the weapons the player is carrying.
	str m_sWeaponList[10];

	// The number of rounds the player was blacklisted from murderer selection.
	int m_nRoundsBlacklisted;
	
	// The number of rounds the player was last chosen as the murderer.
	int m_nRoundsLastChosen;
	
	// The number people the player killed when they're the murderer.
	int m_nPersonalKills;
	
	// The number of innocents the player killed when an innocent themselves.
	int m_nParanoiaKills;
	
	// The number of times the player has died.
	int m_nDeaths;
	
	// The number of times the player disconnected.
	int m_nDisconnects;
	
	// The player has just joined the game.
	bool m_bIsNew;
	
	// The player is active and actually playing.
	bool m_bIsActive;
	
	// The player is recognized as a teamkiller.
	bool m_bIsTeamkiller;
}

///////////////////////////////////////////////////////////////////////////////
//  Prototypes
///////////////////////////////////////////////////////////////////////////////

extern WDIPlayer g_PlayerList[MAX_PLAYERS];

extern global WDIPlayerInfo 2:g_PlayerInfo[MAX_PLAYERS];

///////////////////////////////////////////////////////////////////////////////

extern int WDI_CountPlayers(int count);
extern int WDI_CountInnocents(int count);
extern int WDI_CountMurderers(int count);

extern void WDI_ResetPlayerBlacklists(void);
extern void WDI_ResetPlayerHealth(void);
extern void WDI_ResetPlayerInventory(void);

#endif