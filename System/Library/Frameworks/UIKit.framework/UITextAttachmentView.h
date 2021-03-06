/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSTextAttachmentCell.h>

@class NSTextAttachment, NSString;

@interface UITextAttachmentView : UIView <NSTextAttachmentCell> {

	NSTextAttachment* _attachment;

}

@property (assign,nonatomic,__weak) NSTextAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(NSTextAttachment *)attachment;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4 ;
-(CGSize)cellSize;
-(CGPoint)cellBaselineOffset;
-(CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(id)initWithTextAttachment:(id)arg1 image:(id)arg2 ;
@end

