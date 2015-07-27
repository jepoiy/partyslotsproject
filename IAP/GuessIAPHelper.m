                                                        //
//  RageIAPHelper.m
//  In App Rage
//
//  Created by Ray Wenderlich on 9/5/12.
//  Copyright (c) 2012 Razeware LLC. All rights reserved.
//

#import "GuessIAPHelper.h"

@implementation GuessIAPHelper

+ (GuessIAPHelper *)sharedInstance {
    static dispatch_once_t once;
    static GuessIAPHelper * sharedInstance;
    dispatch_once(&once, ^{
        NSSet * productIdentifiers = [NSSet setWithObjects:
                                      @"",
                                     nil];
        sharedInstance = [[self alloc] initWithProductIdentifiers:productIdentifiers];
    });
    return sharedInstance;
}

@end
