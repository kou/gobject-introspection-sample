/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#ifndef SAMPLE_GREETER_H
#define SAMPLE_GREETER_H

#include <glib-object.h>

G_BEGIN_DECLS

#define SAMPLE_TYPE_GREETER \
  (sample_greeter_get_type())
#define SAMPLE_GREETER(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj), SAMPLE_TYPE_GREETER, SampleGreeter))
#define SAMPLE_GREETER_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass), SAMPLE_TYPE_GREETER, SampleGreeterClass))
#define SAMPLE_IS_GREETER(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj), SAMPLE_TYPE_GREETER))
#define SAMPLE_IS_GREETER_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass), SAMPLE_TYPE_GREETER))
#define SAMPLE_GREETER_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS((obj), SAMPLE_TYPE_GREETER, SampleGreeterClass))

typedef struct _SampleGreeter         SampleGreeter;
typedef struct _SampleGreeterClass    SampleGreeterClass;

/**
 * SampleGreeter:
 *
 * A SampleGreeter greets.
 */
struct _SampleGreeter
{
    /*< private >*/
    GObject parent_instance;
};

struct _SampleGreeterClass
{
    GObjectClass parent_class;
};

GType          sample_greeter_get_type (void) G_GNUC_CONST;
SampleGreeter *sample_greeter_new      (void);
const gchar   *sample_greeter_greet    (SampleGreeter *greeter);

G_END_DECLS

#endif
