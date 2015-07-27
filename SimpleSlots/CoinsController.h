//
//  ViewController.h
//  HorseRace
//
//  Created by Ollie Kett on 28/04/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "BaseViewController.h"
#import <StoreKit/StoreKit.h>
#import "SKProduct+priceAsString.h"

@interface CoinsController : BaseViewController <SKProductsRequestDelegate, SKPaymentTransactionObserver, GameCenterManagerDelegate, GKLeaderboardViewControllerDelegate>{

    IBOutlet UIWebView *webProfilePic;
    
    IBOutlet UIBarButtonItem *barCloseBtn;
    
}

@property (strong, nonatomic) ViewController *viewController;
@property (nonatomic, retain) IBOutlet UIWebView *webView;

- (IBAction)closeCoins:(id)sender;
- (IBAction)purchaseCoins:(id)sender;


@end
