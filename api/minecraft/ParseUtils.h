#pragma once
#include <QString>
#include <QDateTime>

#include "multimc_minecraft_export.h"

/// take the timestamp used by S3 and turn it into QDateTime
MULTIMC_MINECRAFT_EXPORT QDateTime timeFromS3Time(QString str);

/// take a timestamp and convert it into an S3 timestamp
MULTIMC_MINECRAFT_EXPORT QString timeToS3Time(QDateTime);