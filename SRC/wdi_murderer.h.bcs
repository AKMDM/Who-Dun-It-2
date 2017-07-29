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
// Filename: wdi_murderer.h
//
// Description:
//
///////////////////////////////////////////////////////////////////////////////
 
#ifndef WDI_MURDERER_H 
#define WDI_MURDERER_H 

#linklibrary "wdi_murderer"

///////////////////////////////////////////////////////////////////////////////
//  Definitions
///////////////////////////////////////////////////////////////////////////////

// The maximum number of murderers there can be.
#define MAX_MURDERERS 			2

// The maximum number of items the murderer can have.
#define MAX_MURDERITEMS			6

// How many tics to wait before the murderer's sanity drains.
#define SANITY_DRAIN_TICS		15

///////////////////////////////////////////////////////////////////////////////
//  Enums
///////////////////////////////////////////////////////////////////////////////

enum EMurdererType
{
	MURDERER_PLAYERONE,			// First murderer.
	MURDERER_PLAYERTWO,			// Second murderer.
};

enum EMurdererItem
{
	MURDERITEM_ITEMONE,			// Murderer's first item.
	MURDERITEM_ITEMTWO,			// Murderer's second item.
	MURDERITEM_ITEMTHREE,		// Murderer's third item.
	MURDERITEM_ITEMFOUR,		// Murderer's fourth item.
	MURDERITEM_ITEMFIVE,		// Murderer's fifth item.
	MURDERITEM_ITEMSIX,			// Murderer's sixth item.
};

enum EMurdererRank
{
	MURDERRANK_PATHETIC,		// Final score is below 0%.
	MURDERRANK_INCOMPETENT,		// Final score is between 0% and 20%.
	MURDERRANK_INEFFECTIVE,		// Final score is between 21% and 40%.
	MURDERRANK_CAPABLE,			// Final score is between 41% and 60%.
	MURDERRANK_COMPETENT,		// Final score is between 61% and 80%.
	MURDERRANK_EFFECTIVE,		// Final score is between 81% and 99%.
	MURDERRANK_PERFECT,			// Final score is 100%.
	
	NUM_RANKS					// The number of ranks.
};	

///////////////////////////////////////////////////////////////////////////////
//  Structs
///////////////////////////////////////////////////////////////////////////////

struct WDIMurderer
{
	// The name of the murderer.
	str m_sName;
	
	// The player ID of the murderer.
	int m_iID;
	
	// The TID of the murderer.
	int m_iTID;
	
	// The amount of health the murderer has left.
	int m_iHealth;

	// The maximum amount of health the murderer can have.
	int m_iMaxHealth;
	
	// The amount of sanity the murderer has left.
	int m_iSanity;
	
	// The maximum amount of sanity the murderer can have.
	int m_iMaxSanity;
	
	// The number of kills credited to the murderer.
	int m_iKills;
	
	// The final score of the murderer, calculated at the end of a round.
	int m_iScore;
	
	// The murderer is still alive.
	bool m_bIsAlive;
	
	// The murderer died from a mental breakdown.
	bool m_bIsMental;
}

///////////////////////////////////////////////////////////////////////////////

struct WDIMurdererItem
{
	// The name of the item.
	str m_sName;
	
	// The name of the actor for the item.
	str m_sActorName;
	
	// How much the item increases the murderer's score when it kills someone.
	int m_iScoreKilled;
	
	// How much the item reduces the murderer's score if used.
	int m_iScoreUsed;
	
	// How many kills has the item earned.
	int m_iKills;
	
	// How much has the item been used.
	int m_iUsed;
}

///////////////////////////////////////////////////////////////////////////////
//  Prototypes
///////////////////////////////////////////////////////////////////////////////

extern WDIMurderer g_MurdererList[MAX_MURDERERS];
extern WDIMurdererItem g_MurdererItem[MAX_MURDERERS][MAX_MURDERITEMS];

///////////////////////////////////////////////////////////////////////////////

extern int WDI_GetMurdererID(int iMurderer);
extern int WDI_GetMurdererTID(int iMurderer);

extern void WDI_ChooseMurderer(int nMurderers, int iHealthBonus, int iMaxHealthBonus);
extern void WDI_GiveMurdererEquipment(void);

#endif