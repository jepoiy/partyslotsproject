//
//  ViewController.h
//  SimpleSlots
//
//  Created by Ollie Kett on 16/07/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#import "BonusViewController.h"

@interface BonusDoubleViewController : BonusViewController <GameCenterManagerDelegate, GKLeaderboardViewControllerDelegate, GKAchievementViewControllerDelegate, NSURLConnectionDelegate>{
    
    IBOutlet UIButton *prizeChest1, *prizeChest2, *prizeChest3, *prizeChest4, *prizeChest5, *prizeChest6, *prizeChest7, *prizeChest8, *prizeChest9, *prizeChest10;
    
    int card1, card2, card3;
}
-(IBAction)prizeChest:(id)sender;
@end
