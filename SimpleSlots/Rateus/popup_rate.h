//
//  popup_rate.h
//  PartySlots
//
//  Created by Dipen on 26/07/15.
//
//

#import <UIKit/UIKit.h>
@protocol popupRateDelegate <NSObject>

@optional
-(void)btnRateNoClick:(NSString *)tag;
-(void)btnRateYesClick:(NSString *)tag;
-(void)btnRateCancelClick:(NSString *)tag;

@end

@interface popup_rate : UIViewController{
    IBOutlet UILabel *lbl;
    IBOutlet UIImageView *imgbg;
    IBOutlet UIImageView *imgbg_ipad;
}
@property(nonatomic,retain)id<popupRateDelegate> delegate;
@property(nonatomic,retain)NSString *customtag;

@end
