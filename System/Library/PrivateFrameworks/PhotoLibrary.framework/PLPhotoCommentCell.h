/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, PLCloudSharedComment;

@interface PLPhotoCommentCell : UITableViewCell {

	BOOL _usesCompactSeparators;
	UILabel* _commentContentLabel;
	UILabel* _commentBylineLabel;
	UIView* _styledSeparatorView;
	PLCloudSharedComment* _comment;

}

@property (nonatomic,copy) PLCloudSharedComment * comment;                        //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) BOOL usesCompactSeparators;                          //@synthesize usesCompactSeparators=_usesCompactSeparators - In the implementation block
@property (nonatomic,retain,readonly) UILabel * commentContentLabel;              //@synthesize commentContentLabel=_commentContentLabel - In the implementation block
@property (nonatomic,retain,readonly) UILabel * commentBylineLabel;               //@synthesize commentBylineLabel=_commentBylineLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;               //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(double)heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3 ;
+(Class)layerClass;
+(id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(BOOL)arg2 ;
+(id)_commentStringForComment:(id)arg1 ;
+(id)_attributionStringForComment:(id)arg1 ;
-(void)setUsesCompactSeparators:(BOOL)arg1 ;
-(void)setComment:(PLCloudSharedComment *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)delete:(id)arg1 ;
-(PLCloudSharedComment *)comment;
-(void)_updateContent;
-(BOOL)usesCompactSeparators;
-(UIView *)styledSeparatorView;
-(UILabel *)commentContentLabel;
-(UILabel *)commentBylineLabel;
@end
