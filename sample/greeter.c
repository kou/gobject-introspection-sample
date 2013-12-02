/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include "greeter.h"

/**
* SECTION: greeter
* @short_description: A greeter.
*
* The #SampleGreeter is a class to greet.
*/
G_DEFINE_TYPE(SampleGreeter, sample_greeter, G_TYPE_OBJECT)

static void
sample_greeter_init(SampleGreeter *object)
{
}

static void
sample_greeter_class_init(SampleGreeterClass *klass)
{
}

/**
 * sample_greeter_new:
 *
 * Allocates a new #SampleGreeter.
 *
 * Returns: a new #SampleGreeter.
 */
SampleGreeter *
sample_greeter_new(void)
{
    SampleGreeter *greeter;
    greeter = g_object_new(SAMPLE_TYPE_GREETER, NULL);
    return greeter;
}

/**
 * sample_greeter_greet:
 * @greeter: A #SampleGreeter.
 *
 * Greets.
 *
 * Returns: Message from a greeter.
 */
const gchar *
sample_greeter_greet(SampleGreeter *greeter)
{
    return "Hello!";
}
