/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDParagraphProperties, WDParagraph, WMParagraphStyle;

@interface WMParagraphStyleMapper : CMMapper {

	WDParagraphProperties* wdParaProperties;
	WDParagraph* wdParagraph;
	WMParagraphStyle* mStyle;

}
-(BOOL)checkListId:(long long)arg1 level:(unsigned char)arg2 ;
-(void)mapBulletAt:(id)arg1 forLevel:(id)arg2 forIndex:(int)arg3 listState:(id)arg4 ;
-(id)bulletLabelAtLevel:(id)arg1 forIndex:(int)arg2 bulletFormat:(int)arg3 listState:(id)arg4 ;
-(id)labelStringWithGap:(id)arg1 ;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(BOOL)arg3 ;
-(BOOL)isListItem;
-(void)mapListStyleAt:(id)arg1 state:(id)arg2 ;
-(void)destyleEmptyParagraph;
@end

