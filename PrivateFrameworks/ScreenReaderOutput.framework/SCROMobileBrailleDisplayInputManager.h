/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSSet, NSMutableDictionary;



@interface SCROMobileBrailleDisplayInputManager : NSObject 
{
    NSMutableDictionary *_displayInfoDict;
    NSSet *_brailleKeys;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (void)configureWithDriverConfiguration:(id)arg1;
- (id)driverIdentifierForDisplayWithToken:(long)arg1;
- (id)modelIdentifierForDisplayWithToken:(long)arg1;
- (id)commandForBrailleKey:(id)arg1;
- (id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(long)arg2;
- (NSUInteger)countForDisplayWithToken:(long)arg1;
- (id)inputIdentifierAtIndex:(NSUInteger)arg1 forDisplayWithToken:(long)arg2;
- (id)commandAtIndex:(NSUInteger)arg1 forDisplayWithToken:(long)arg2;
- (id)buttonNamesAtIndex:(NSUInteger)arg1 forDisplayWithToken:(long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)retainCount;
- (id)init;
- (void)release;
- (id)retain;
- (id)autorelease;
- (void)dealloc;

@end