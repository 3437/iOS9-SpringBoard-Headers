/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowAction.h>

@interface PTSPresentViewControllerRowAction : PTSRowAction {

	/*^block*/id _viewControllerCreator;

}

@property (nonatomic,copy) id viewControllerCreator;              //@synthesize viewControllerCreator=_viewControllerCreator - In the implementation block
+(id)actionWithViewControllerCreator:(/*^block*/id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewControllerCreator:(id)arg1 ;
-(id)viewControllerCreator;
@end
