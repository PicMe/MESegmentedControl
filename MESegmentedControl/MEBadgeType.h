//
//  MEBadgeType.h
//  
//
//  Created by Victor Shamanov on 8/11/15.
//
//

#import <UIKit/UIKit.h>

@protocol MEBadgeType <NSObject>

@property (nonatomic, assign, readwrite) CGRect frame;

- (void)removeFromSuperview;
- (void)autoBadgeSizeWithString:(NSString *)string;

- (void)addToView:(UIView *)view;

@end
