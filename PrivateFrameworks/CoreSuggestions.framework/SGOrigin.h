/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding> {
    NSString *_contextSnippet;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _contextSnippetRange;
    NSDate *_date;
    NSString *_externalKey;
    BOOL _fromForwardedMessage;
    NSString *_sourceKey;
    NSString *_title;
    unsigned int _type;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *externalKey;
@property (getter=isFromForwardedMessage, readonly) BOOL fromForwardedMessage;
@property (nonatomic, readonly) NSString *sourceKey;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) NSURL *url;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

+ (id)originWithType:(unsigned int)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(BOOL)arg4;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalKey;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned int)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToOrigin:(id)arg1;
- (BOOL)isFromForwardedMessage;
- (id)sourceKey;
- (id)title;
- (unsigned int)type;
- (id)url;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)originForDuplicateKey:(id)arg1 sourceKey:(id)arg2 store:(id)arg3;

- (void)addDetailsFromOriginatingContactEntity:(id)arg1 store:(id)arg2;
- (void)addDetailsFromOriginatingGenericEntity:(id)arg1;

@end
