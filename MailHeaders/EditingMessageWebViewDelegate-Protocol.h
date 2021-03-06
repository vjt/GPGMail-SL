/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol EditingMessageWebViewDelegate <NSObject>
- (BOOL)allowQuoting;
- (BOOL)allowsRichText;
- (void)setAllowsRichText:(BOOL)arg1;
- (void)editLink;
- (void)removeSelectedLink;
- (BOOL)selectionIsInList;
- (void)increaseListNestingLevel:(id)arg1;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
@end

