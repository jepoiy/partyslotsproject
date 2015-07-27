//
//  popup_rate.m
//  PartySlots
//
//  Created by Dipen on 26/07/15.
//
//

#import "popup_rate.h"

@interface popup_rate ()

@end

@implementation popup_rate
@synthesize delegate,customtag;
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



-(IBAction)yesClick:(id)sender{
    
    if (delegate && [delegate respondsToSelector:@selector(btnRateYesClick:)]) {
        [delegate btnRateYesClick:customtag];
    }
    
}

-(IBAction)NoClick:(id)sender{

    if (delegate && [delegate respondsToSelector:@selector(btnRateNoClick:)]) {
        [delegate btnRateNoClick:customtag];
    }
}
-(IBAction)cancelClick:(id)sender{
    
    if (delegate && [delegate respondsToSelector:@selector(btnRateCancelClick:)]) {
        [delegate btnRateCancelClick:customtag];
    }
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
