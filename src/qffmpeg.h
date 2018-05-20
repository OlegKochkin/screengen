#define __STDC_CONSTANT_MACROS

#include <QString>
#include <QImage>
#include <QTime>
#include <QTextStream>

extern "C" {
  #include <libavcodec/avcodec.h>
  #include <libavformat/avformat.h>
	#include <libswscale/swscale.h>
	#include <libavutil/mathematics.h>	// Added for Kubuntu (patch from srog (qt-apps.org))
	#include <libavutil/imgutils.h>
	#include <libavcodec/version.h>
  }

class TFfmpeg{
public:
	TFfmpeg(QString videoFile, int logLevel);
	~TFfmpeg();
	int get_bit_rate(AVCodecParameters *ctx);
	QString getVInfo();
	QString getAInfo();
	QImage getImage(uint ms);
	
	int vStreamNumber, aStreamNumber, streamsCount, vWidth, vHeight, error;
	int64_t iDuration;
	QString vCodecTag, aChannels, aSamples, vResolution, vFps, aBitrate, vBitrate, fullBitrate, vCodecName, aCodecName, duration, generalInfo;
	double dar;
private:
	AVCodecContext getVCodecContext();
	AVFormatContext *pAVFormatContext;
	AVCodecContext *vCodecContext;
	AVCodecParameters *vCodecPar, *aCodecPar;
	AVCodec *vCodec, *aCodec;
};
