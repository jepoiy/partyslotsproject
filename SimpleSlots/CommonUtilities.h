//
//  CommonUtilities.h
//  VegasSlots
//
//  Created by Alex on 7/16/13.
//
//

#import <Foundation/Foundation.h>

@interface CommonUtilities : NSObject

+(NSData*) encryptString:(NSString *)data :(NSString *)objectname;
+(NSString*) decryptString:(NSString *)objectname;
+(NSString*) base64Encrypt:(NSString *)data :(NSString *)key;
+(NSString*) base64Decrypt:(NSString *)data :(NSString *)key;
+(NSString *) base64StringFromData: (NSData *)data length: (int)length;
+(NSData *)base64DataFromString: (NSString *)string;

+(NSString*) md5:(NSString *) input;
+ (NSString *)encode:(const uint8_t *)input length:(NSInteger)length ;
@end
