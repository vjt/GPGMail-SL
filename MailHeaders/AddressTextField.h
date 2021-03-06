/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "AutosizingTextField.h"

#import "DraggingTextViewDelegate-Protocol.h"
#import "NSCopying-Protocol.h"

@class AddressAttachment, AddressRectangleView, NSMutableArray, NSMutableDictionary;

@interface AddressTextField : AutosizingTextField <DraggingTextViewDelegate, NSCopying>
{
    BOOL _addressField;
    BOOL _allowsMultipleAddresses;
    NSMutableArray *trackingRectTags;
    AddressAttachment *expandedAtomAttachment;
    AddressAttachment *attachmentBeingDragged;
    int addressAtomType;
    NSMutableArray *stringsWithNoRecords;
    NSMutableArray *stringsAwaitingRecords;
    NSMutableDictionary *recordsForStrings;
    NSMutableArray *addressRects;
    struct _NSRange draggedSourceAtomsRange;
    BOOL isDraggingFromSelf;
    BOOL isHoveringAddressCard;
    AddressRectangleView *rectangleView;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)insertInScrollViewWithMaxLines:(unsigned long)arg1;
- (void)_scrollToEnd:(id)arg1;
- (void)sizeToFit;
- (void)appendAddressList:(id)arg1 operation:(unsigned long)arg2;
- (unsigned long)insertionPositionForMousePoint:(struct CGPoint)arg1;
- (void)getAddressRectsForAtoms;
- (id)emailAddressesFromABRecordUIDs:(id)arg1;
- (id)emailAddressesFromFiles:(id)arg1;
- (void)setAddressField:(BOOL)arg1;
- (BOOL)addressField;
- (BOOL)allowsMultipleAddresses;
- (void)setAllowsMultipleAddresses:(BOOL)arg1;
- (int)addressAtomType;
- (void)setAddressAtomType:(int)arg1;
- (void)setExpandedAtomAttachment:(id)arg1;
- (unsigned long)draggingEntered:(id)arg1;
- (unsigned long)draggingUpdated:(id)arg1;
- (unsigned long)textView:(id)arg1 draggingEntered:(id)arg2;
- (unsigned long)textView:(id)arg1 draggingUpdated:(id)arg2;
- (void)textView:(id)arg1 draggingExited:(id)arg2;
- (void)draggingExited:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 event:(id)arg3 inRect:(struct CGRect)arg4 atIndex:(unsigned long)arg5;
- (void)selectTextBeforePosition:(unsigned long)arg1;
- (void)selectTextAfterPosition:(unsigned long)arg1;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long)arg4;
- (void)expandGroupAddress:(id)arg1;
- (void)editAddress:(id)arg1;
- (void)removeAddress:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)_performOperation:(unsigned long)arg1 usingPasteboard:(id)arg2 sender:(id)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)textView:(id)arg1 shouldReadSelectionFromPasteboard:(id)arg2 type:(id)arg3 result:(char *)arg4;
- (void)textView:(id)arg1 draggedImage:(id)arg2 endedAt:(struct CGPoint)arg3 operation:(unsigned long)arg4;
- (void)updateSelectionForDrag;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long)arg3;
- (void)setAttachmentBeingDragged:(id)arg1;
- (unsigned long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)textView:(id)arg1 concludeDragOperation:(id)arg2;
- (void)undo:(id)arg1;
- (void)redo:(id)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)atomicizeAllAddresses;
- (void)recklesslyAtomicizeAllAddresses;
- (void)domainForMatchingDidChange;
- (void)addressesNeedRedisplay:(id)arg1;
- (void)addressChanged:(id)arg1;
- (void)resetCursorRects;
- (void)viewDidMoveToWindow;
- (void)windowDidResignOrBecomeMainOrKey:(id)arg1;
- (BOOL)_showingFocusRingAroundEnclosingScrollView:(id)arg1;
- (void)_drawScrollViewFocusRing:(id)arg1 clipRect:(struct CGRect)arg2 needsFullDisplay:(BOOL)arg3;
- (void)setCell:(id)arg1;

@end

