//
//  Configure.h
//  PartySlots
//
//  Created by Alex on 7/22/13.
//
//



// -----------------------------------
// GAME SETTINGS
// -----------------------------------
#define INITIAL_STARTUP_COINS @"5000"
#define INITIAL_STARTUP_BET @"200"
#define INITIAL_LINES_COUNT @"20"
#define LABEL_WELCOME @"Welcome to Shark Fish Slots"
#define LABEL_TAPPLAY @"Tap Spin to Play"

#define DELAY_FOR_AUTO_SPIN 0

#define DONT_SHOW_APPLOVIN_ON_EACH_SCREEN

#define kGameCenterLeaderboardID @"com.SCA.porn2.leaderboard"

// -----------------------------------
// CUSTOM BUILT-IN DOWNLOAD POPUP
//
// if you want to have a custom popup asking for download of some other game,
// in addition to setting these up you'll also need to change the graphic of the download splash:
// replace images downloadview_small.png and downloadview_small@2x.png with your own
// -----------------------------------
#define SHOW_DOWNLOAD_POPUP NO
#define DOWNLOAD_NOW_URL @"https://itunes.apple.com/app/id1001659733"



// -----------------------------------
// IN APP PURCHASES
// these must match the product identifiers that you've set up in iTunesConnect
// -----------------------------------
#define IAP1 @"com.SCA.porn2.SomeCoins"
#define IAP2 @"com.SCA.porn2.ManyCoins"
#define IAP3 @"com.SCA.porn2.PlentyCoins"
#define IAP4 @"com.SCA.porn2.VeryManyCoins"
#define IAP5 @"com.SCA.porn2.HugeCoins"
#define IAP6 @"com.SCA.porn2.EnormousCoins"
// -----------------------------------
// the amounts of coins you buy in each in app purchase
// -----------------------------------
#define IAP_AMT_1 5000
#define IAP_AMT_2 11000
#define IAP_AMT_3 25000
#define IAP_AMT_4 50000
#define IAP_AMT_5 120000
#define IAP_AMT_6 1000000


// -----------------------------------
// ADVERTISING SETTINGS:
// -----------------------------------

// playhaven
#define PLAYHAVEN_TOKEN @""
#define PLAYHAVEN_SECRET @""
#define PLAYHAVEN_MORE_GAMES_STRING @"more_games"
// chartboost
#define CHARTBOOST_APP_KEY  @"5573aa0004b01617e128aa72"
#define CHARTBOOST_APP_SECRET @"573cb2b195b5998592a8c3e920249583b60dc599"
// revmob
#define REVMOB_APP_ID @""

// if this one is 1, then we'll show the AppLovin interstitial on the lobby every single time we get to the lobby; otherwise, we show it once every N times
#define ADS_INTERSTITIAL_ON_LOBBY_FREQUENCY 1

// if you comment out this line there will be no showing of ads on app resume
#define ADS_RESUME_FREQUENCY 5
/*
 for revmob interstitials instead of Chartboost, in method - (void)applicationWillEnterForeground:(UIApplication *)application of AppDelegate.m,
 instead of the line that says
 [[Chartboost sharedChartboost] showInterstitial];
 write a line that says
 [[RevMobAds session] showFullscreen];
 */

// if you comment out this line there will be no showing of ads on spin during the game
#define ADS_SPIN_FREQUENCY 8
/*
 for revmob interstitials instead of Chartboost, in method  - (void)spin of GameClassic20.m,
 instead of the line that says
 [[Chartboost sharedChartboost] showInterstitial];
 write a line that says
 [[RevMobAds session] showFullscreen];
 */






//#define kSERVER_SIDE_URL @"http://sync1.okduk.com/sync_vegasslots.php"
//#define kURL_VERIFY_PURCHASE_RECEIPT @"http://sync1.okduk.com/transaction.php"