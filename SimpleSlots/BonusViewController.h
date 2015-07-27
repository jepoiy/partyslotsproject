//
//  ViewController.h
//  SimpleSlots
//
//  Created by Ollie Kett on 16/07/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSData+AES.h"
#import "NSData+Base64.h"
#import "NSString+Base64.h"
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioServices.h>
#import <GameKit/GameKit.h>
#import "GameCenterManager.h"
#import "AppDelegate.h"
#import "ViewController.h"


@class GameCenterManager;
@class AppDelegate;

@interface BonusViewController : ViewController <GameCenterManagerDelegate, GKLeaderboardViewControllerDelegate, GKAchievementViewControllerDelegate, NSURLConnectionDelegate>{
    
    IBOutlet UIImageView *spinner;
    
    IBOutlet UIButton *spinWheelButton, *home;
    
     // bonus variables:

    float degreesWheel, wheelSpinTo;
    int location, amountToSpin, spinTimes;
    NSTimer *autoT;
}

@property (nonatomic, retain) GameCenterManager *gameCenterManager;
@property (nonatomic, assign) int64_t currentScore;
@property (nonatomic, retain) NSString* currentLeaderBoard;
@property (nonatomic, retain) UILabel *currentScoreLabel;

- (IBAction)spin:(id)sender;
- (IBAction)home:(id)sender;
- (IBAction)coinsView:(id)sender;
- (void)manageWin:(int)winAmount;

@end
