/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@protocol CNPropertyCellDelegate;
@class UILabel;

@interface CNLinkedCardsCell : CNLabeledCell {

	id<CNPropertyCellDelegate> _delegate;
	UILabel* _sourceLabel;
	UILabel* _nameLabel;

}

@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * sourceLabel;                                 //@synthesize sourceLabel=_sourceLabel - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                   //@synthesize nameLabel=_nameLabel - In the implementation block
+(BOOL)wantsChevron;
-(void)performDefaultAction;
-(void)setCardGroupItem:(id)arg1 ;
-(UILabel *)sourceLabel;
-(UILabel *)nameLabel;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
-(id)valueView;
-(id)labelView;
-(BOOL)shouldPerformDefaultAction;
@end

