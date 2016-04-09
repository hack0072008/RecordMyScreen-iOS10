/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIKeyboardInput.h"
#import <UIKit/UIView.h>

@class UITextInputTraits, UITextInteractionAssistant, UITextSelectionView, UIColor;
@protocol UITextSelectingContent;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput> {
	UITextInputTraits* m_traits;
}
// in a protocol: @property(assign, nonatomic) int autocapitalizationType;
// in a protocol: @property(assign, nonatomic) int autocorrectionType;
// in a protocol: @property(assign, nonatomic) int keyboardType;
// in a protocol: @property(assign, nonatomic) int keyboardAppearance;
// in a protocol: @property(assign, nonatomic) int returnKeyType;
// in a protocol: @property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
// in a protocol: @property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
// in a protocol: @property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;
// in a protocol: @property(retain, nonatomic) UIColor* insertionPointColor;
// in a protocol: @property(assign, nonatomic) unsigned insertionPointWidth;
// in a protocol: @property(assign, nonatomic) int textLoupeVisibility;
// in a protocol: @property(assign, nonatomic) int textSelectionBehavior;
// in a protocol: @property(assign, nonatomic) id textSuggestionDelegate;
// in a protocol: @property(assign, nonatomic) BOOL contentsIsSingleValue;
// in a protocol: @property(assign, nonatomic) BOOL acceptsEmoji;
// in a protocol: @property(readonly, assign, nonatomic) UITextSelectionView* selectionView;
// in a protocol: @property(readonly, assign, nonatomic) UITextInteractionAssistant* interactionAssistant;
// in a protocol: @property(readonly, assign, nonatomic) UIView<UITextSelectingContent>* content;
// in a protocol: @property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;
// in a protocol: @property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;
// in a protocol (since 3.2): @property(assign, nonatomic) int emptyContentReturnKeyType;
// in a protocol (since 3.2): @property(copy) UITextRange* selectedTextRange;
// in a protocol (since 3.2): @property(readonly, assign, nonatomic) UITextRange* markedTextRange;
// in a protocol (since 3.2): @property(copy, nonatomic) NSDictionary* markedTextStyle;
// in a protocol (since 3.2): @property(readonly, assign, nonatomic) UITextPosition* beginningOfDocument;
// in a protocol (since 3.2): @property(readonly, assign, nonatomic) UITextPosition* endOfDocument;
// in a protocol (since 3.2): @property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;
// in a protocol (since 3.2): @property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;
// in a protocol (since 3.2): @property(readonly, assign, nonatomic) UIView* textInputView;
// inherited: -(void)dealloc;
// in a protocol: -(id)textInputTraits;
// inherited: -(void)forwardInvocation:(id)invocation;
// inherited: -(id)methodSignatureForSelector:(SEL)selector;
// in a protocol: -(void)takeTraitsFrom:(id)from;
-(id)delegate;	// in a protocol below 3.2.
// in a protocol: -(void)deleteBackward;
// in a protocol: -(void)insertText:(id)text;
-(void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;	// in a protocol below 3.2.
-(void)replaceCurrentWordWithText:(id)text;	// in a protocol below 3.2.
// in a protocol (N/A after 3.2): -(void)replaceRangeWithTextWithoutClosingTyping:(NSRange)textWithoutClosingTyping replacementText:(id)text;
// in a protocol (since 3.2): -(void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;
// in a protocol: -(void)setMarkedText:(id)text selectedRange:(NSRange)range;
// in a protocol: -(void)setMarkedText:(id)text;
-(void)confirmMarkedText:(id)text;	// in a protocol below 3.2
// in a protocol: -(id)markedText;
-(unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// in a protocol below 3.2
// in a protocol: -(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterAfterCaretSelection;	// in a protocol below 3.2
// in a protocol: -(id)fontForCaretSelection;
// in a protocol: -(id)textColorForCaretSelection;
// in a protocol: -(CGRect)rectForNSRange:(NSRange)nsrange;
-(id)rectsForNSRange:(NSRange)nsrange;	// in a protocol below 3.2
// in a protocol: -(CGRect)rectContainingCaretSelection;
// in a protocol: -(id)wordRangeContainingCaretSelection;
// in a protocol: -(BOOL)shouldEnableAutoShift;
// in a protocol: -(id)wordContainingCaretSelection;
// in a protocol: -(id)wordInRange:(id)range;
-(void)expandSelectionToStartOfWordContainingCaretSelection;	// in a protocol below 3.2
-(int)wordOffsetInRange:(id)range;	// in a protocol below 3.2
// in a protocol: -(BOOL)hasContent;
// in a protocol: -(BOOL)hasSelection;
-(int)selectionState;	// in a protocol below 3.2
-(BOOL)selectionAtDocumentStart;	// in a protocol below 3.2
// in a protocol (N/A after 3.2): -(BOOL)selectionAtSentenceStart;
-(BOOL)selectionAtWordStart;	// in a protocol below 3.2
// in a protocol: -(NSRange)selectionRange;
// in a protocol (N/A after 3.2): -(NSRange)markedTextRange;
// in a protocol (since 3.2): -(NSRange)_markedTextRange;
// in a protocol: -(id)selectedDOMRange;
// in a protocol: -(void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;
-(id)rangeByMovingCurrentSelection:(int)selection;	// in a protocol below 3.2
-(id)rangeByExtendingCurrentSelection:(int)selection;	// in a protocol below 3.2
-(void)extendCurrentSelection:(int)selection;	// in a protocol below 3.2
// in a protocol: -(void)moveBackward:(unsigned)backward;
// in a protocol: -(void)moveForward:(unsigned)forward;
// in a protocol: -(void)selectAll;
-(void)setText:(id)text;	// in a protocol below 3.2
-(id)text;	// in a protocol below 3.2
-(void)setSelectionWithPoint:(CGPoint)point;
-(CGRect)caretRect;
-(CGRect)convertCaretRect:(CGRect)rect;	// in a protocol below 3.2
// in a protocol (N/A after 3.2): -(id)keyboardInputView;
-(BOOL)isShowingPlaceholder;
-(void)setupPlaceholderTextIfNeeded;
-(id)editingDelegate;
-(void)setEditingDelegate:(id)delegate;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)secure;
// in a protocol (N/A after 3.2): -(BOOL)isProxyFor:(id)aFor;
// in a protocol: -(CGRect)selectionClipRect;
// in a protocol: -(void)beginSelectionChange;
// in a protocol: -(void)endSelectionChange;
-(void)updateSelection;	// in a protocol below 3.2
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)gestures;
-(void)detachSelectionView;	// in a protocol below 3.2
-(void)detachInteractionAssistant;	// in a protocol below 3.2
-(CGRect)visibleBounds;
// in a protocol (since 3.2): -(BOOL)hasText;
// in a protocol (since 3.2): -(id)textInRange:(id)range;
// in a protocol (since 3.2): -(id)textRangeFromPosition:(id)position toPosition:(id)position2;
// in a protocol (since 3.2): -(void)replaceRange:(id)range withText:(id)text;
// in a protocol (since 3.2): -(CGRect)firstRectForRange:(id)range;
// in a protocol (since 3.2): -(CGRect)caretRectForPosition:(id)position;
// in a protocol (since 3.2): -(id)closestPositionToPoint:(CGPoint)point;
// in a protocol (since 3.2): -(id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;
// in a protocol (since 3.2): -(id)characterRangeAtPoint:(CGPoint)point;
// in a protocol (since 3.2): -(id)positionWithinRange:(id)range farthestInDirection:(int)direction;
// in a protocol (since 3.2): -(id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;
// in a protocol (since 3.2): -(int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;
// in a protocol (since 3.2): -(void)setBaseWritingDirection:(int)direction forRange:(id)range;
// in a protocol (since 3.2): -(void)unmarkText;
// in a protocol (since 3.2): -(int)comparePosition:(id)position toPosition:(id)position2;
// in a protocol (since 3.2): -(int)offsetFromPosition:(id)position toPosition:(id)position2;
// in a protocol (since 3.2): -(id)positionFromPosition:(id)position offset:(int)offset;
// in a protocol (since 3.2): -(id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;
// in a protocol (since 3.2): -(BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;
// in a protocol (since 3.2): -(id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;
// in a protocol (since 3.2): -(BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;
// in a protocol (since 3.2): -(id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;
@end
