/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PINView.h>
#import <UIKit/UITableViewDataSource.h>

@class UITextField, AlphanumericPINTableViewCell, UITableView, NSString;

@interface PSTextFieldPINView : PINView <UITableViewDataSource> {

	UITextField* _passcodeField;
	AlphanumericPINTableViewCell* _cell;
	UITableView* _table;
	BOOL _usesNumericKeyboard;

}

@property (assign,nonatomic) BOOL usesNumericKeyboard;              //@synthesize usesNumericKeyboard=_usesNumericKeyboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setTextFieldKeyboardType:(long long)arg1 ;
-(void)setTextFieldKeyboardAppearance:(long long)arg1 ;
-(void)showError:(id)arg1 animate:(BOOL)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(void)okButtonPressed:(id)arg1 ;
-(void)setUsesNumericKeyboard:(BOOL)arg1 ;
-(BOOL)usesNumericKeyboard;
@end

