/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSLayoutConstraint.h>

@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint
+(id)constraintsWithAutoresizingMask:(unsigned long long)arg1 subitem:(id)arg2 frame:(CGRect)arg3 superitem:(id)arg4 bounds:(CGRect)arg5 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 ;
-(id)descriptionAccessory;
-(id)_viewForAutoresizingMask;
-(int)_constraintType;
@end
