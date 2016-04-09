/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UITableViewCell.h>
#import "PhotoLibrary-Structs.h"
#import "UITextViewDelegate.h"
#import "UITextFieldDelegate.h"

@class UITextField, PLTextView;

@interface PLTableViewEditableCell : UITableViewCell <UITextViewDelegate, UITextFieldDelegate> {
	PLTextView* _textView;
	UITextField* _textField;
	id _delegate;
	BOOL _forceFirstResponder;
}
-(instancetype)initWithFrame:(CGRect)frame multiLine:(BOOL)line;
// inherited: -(void)dealloc;
-(void)setDelegate:(id)delegate;
-(void)forceFirstResponder:(BOOL)responder;
// inherited: -(void)layoutSubviews;
-(void)becomeFirstResponder;
-(void)resignFirstResponder;
// inherited: -(BOOL)isEditing;
-(id)value;
-(void)setPlaceholderText:(id)text;
// in a protocol: -(void)textFieldDidBeginEditing:(id)textField;
// in a protocol: -(BOOL)textFieldShouldEndEditing:(id)textField;
// in a protocol: -(BOOL)textFieldShouldReturn:(id)textField;
-(void)_textFieldChanged;
-(CGSize)contentSize;
// in a protocol: -(void)textViewDidChange:(id)textView;
// in a protocol: -(void)textViewDidBeginEditing:(id)textView;
// in a protocol: -(BOOL)textViewShouldEndEditing:(id)textView;
@end

