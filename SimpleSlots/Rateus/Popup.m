//
//  Popup.m
//  Popup
//
//  Created by Tops on 7/25/15.
//  Copyright (c) 2015 Tops. All rights reserved.
//

#import "Popup.h"

@interface Popup ()

@end

@implementation Popup
@synthesize delegate,customtag;
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    NSLog(@"Tag:%@",customtag);
    lbl.text = customtag;
}

-(void)viewWillAppear:(BOOL)animated{
    lbl.text = customtag;
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(IBAction)yesClick:(id)sender{
    
    if (delegate && [delegate respondsToSelector:@selector(btnYesClick:)]) {
        [delegate btnYesClick:customtag];
    }
    
     lbl.text = customtag;
    
    if ([customtag isEqualToString:@"301"]) {
        [imgbg setImage:[UIImage imageNamed:@"popup"]];
        [imgbg_ipad setImage:[UIImage imageNamed:@"popup_ipad"]];
        
    }else if ([customtag isEqualToString:@"302"]){
        [imgbg setImage:[UIImage imageNamed:@"popup2"]];
        [imgbg_ipad setImage:[UIImage imageNamed:@"popup2_ipad"]];
    }
    
}

-(IBAction)NoClick:(id)sender{
    
    if (delegate && [delegate respondsToSelector:@selector(btnNoClick:)]) {
        [delegate btnNoClick:customtag];
    }
}
-(IBAction)cancelClick:(id)sender{

    if (delegate && [delegate respondsToSelector:@selector(btnCancelClick:)]) {
        [delegate btnCancelClick:customtag];
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
