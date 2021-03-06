/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTableHeaderCell.h"

@class MessageListCell, NSString;

@interface MessageListHeaderCell : NSTableHeaderCell
{
    MessageListCell *_realCell;
    unsigned int _imageAlignment;
    NSString *_accessibilityTitle;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setImageAlignment:(unsigned long)arg1;
- (void)setAccessibilityTitle:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;

@end

