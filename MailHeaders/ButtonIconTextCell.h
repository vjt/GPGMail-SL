/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSButtonCell.h"

@class NSImage;

@interface ButtonIconTextCell : NSButtonCell
{
    NSImage *_icon;
    BOOL _cellEnabled;
    struct CGRect _cellRect;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setIcon:(id)arg1;
- (id)icon;
- (struct CGSize)iconSizeForFrame:(struct CGRect)arg1;
- (void)setCellEnabled:(BOOL)arg1;
- (BOOL)cellEnabled;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

