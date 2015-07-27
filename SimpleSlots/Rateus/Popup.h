//
//  Popup.h
//  Popup
//
//  Created by Tops on 7/25/15.
//  Copyright (c) 2015 Tops. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol popupDelegate <NSObject>

@optional
-(void)btnNoClick:(NSString *)tag;
-(void)btnYesClick:(NSString *)tag;
-(void)btnCancelClick:(NSString *)tag;

@end

@interface Popup : UIViewController{
    IBOutlet UILabel *lbl;
    IBOutlet UIImageView *imgbg;
    IBOutlet UIImageView *imgbg_ipad;
}
@property(nonatomic,retain)id<popupDelegate> delegate;
@property(nonatomic,retain)NSString *customtag;
@end
