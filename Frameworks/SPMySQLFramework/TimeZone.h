//
//  TimeZone.h
//  SPMySQL.framework
//
//  Created by Robin Kunde on 8/19/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SPMySQLConnection (TimeZone)

// Current connection time zone information
- (nullable NSString *)timeZoneIdentifier;

// Setting connection time zone
- (BOOL)setTimeZoneIdentifier:(nullable NSString *)newTimeZoneIdentifier;

@end

NS_ASSUME_NONNULL_END
