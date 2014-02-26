//
//  OCNDictionary.h
//  objc-ngram
//
//  Created by Daniel Doubrovkine on 2/26/14.
//
//

#import <Foundation/Foundation.h>

@interface OCNDictionary : NSObject
+ (instancetype)dictionary;

- (NSDictionary *)ngramsForString:(NSString *)str;
- (NSDictionary *)ngramsForString:(NSString *)str withWidth:(NSInteger)width;
- (NSDictionary *)ngramsForString:(NSString *)str withMax:(NSInteger)max andWidth:(NSInteger)width;
@end
