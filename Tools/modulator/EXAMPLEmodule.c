
#include "Python.h"

static PyObject *ErrorObject;

/* ----------------------------------------------------- */

/* Declarations for objects of type simple object */

typedef struct {
	PyObject_HEAD
	/* XXXX Add your own stuff here */
} simpobject;

static PyTypeObject Simptype;



/* ---------------------------------------------------------------- */

/* Declarations for objects of type number-like object */

typedef struct {
	PyObject_HEAD
	/* XXXX Add your own stuff here */
} nlobject;

static PyTypeObject Nltype;



/* ---------------------------------------------------------------- */

/* Declarations for objects of type over-the-top object */

typedef struct {
	PyObject_HEAD
	/* XXXX Add your own stuff here */
} otobject;

static PyTypeObject Ottype;



/* ---------------------------------------------------------------- */

static char simp_sample__doc__[] = 
""
;

static PyObject *
simp_sample(simpobject *self, PyObject *args)
{
	if (!PyArg_ParseTuple(args, ""))
		return NULL;
	Py_INCREF(Py_None);
	return Py_None;
}


static struct PyMethodDef simp_methods[] = {
	{"sample",	(PyCFunction)simp_sample,	METH_VARARGS,	simp_sample__doc__},
 
	{NULL,		NULL}		/* sentinel */
};

/* ---------- */


static PyObject *
simp_getattr(simpobject *self, char *name)
{
	/* XXXX Add your own getattr code here */
	return Py_FindMethod(simp_methods, (PyObject *)self, name);
}

static simpobject *
newsimpobject()
{
	simpobject *self;
	
	self = PyObject_NEW(simpobject, &Simptype);
	if (self == NULL)
		return NULL;
	/* XXXX Add your own initializers here */
	return self;
}


static char Simptype__doc__[] = 
""
;

static PyTypeObject Simptype = {
	PyObject_HEAD_INIT(&PyType_Type)
	0,				/*ob_size*/
	"simple object",			/*tp_name*/
	sizeof(simpobject),		/*tp_basicsize*/
	0,				/*tp_itemsize*/
	/* methods */
	(destructor)0,	/*tp_dealloc*/
	(printfunc)0,		/*tp_print*/
	(getattrfunc)simp_getattr,	/*tp_getattr*/
	(setattrfunc)0,	/*tp_setattr*/
	(cmpfunc)0,		/*tp_compare*/
	(reprfunc)0,		/*tp_repr*/
	0,			/*tp_as_number*/
	0,		/*tp_as_sequence*/
	0,		/*tp_as_mapping*/
	(hashfunc)0,		/*tp_hash*/
	(ternaryfunc)0,		/*tp_call*/
	(reprfunc)0,		/*tp_str*/

	/* Space for future expansion */
	0L,0L,0L,0L,
	Simptype__doc__ /* Documentation string */
};

/* End of code for simple object objects */
/* -------------------------------------------------------- */


static struct PyMethodDef nl_methods[] = {
	
	{NULL,		NULL}		/* sentinel */
};

/* ---------- */


static nlobject *
newnlobject()
{
	nlobject *self;
	
	self = PyObject_NEW(nlobject, &Nltype);
	if (self == NULL)
		return NULL;
	/* XXXX Add your own initializers here */
	return self;
}


static PyObject *
nl_repr(nlobject *self)
{
	PyObject *s;

	/* XXXX Add code here to put self into s */
	return s;
}

static int
nl_compare(nlobject *v, nlobject *w)
{
	/* XXXX Compare objects and return -1, 0 or 1 */
}

/* Code to access number-like object objects as numbers */

static PyObject *
nl_add(nlobject *v, nlobject *w)
{
	/* XXXX Add them */
}

static PyObject *
nl_sub(nlobject *v, nlobject *w)
{
	/* XXXX Subtract them */
}

static PyObject *
nl_mul(nlobject *v, nlobject *w)
{
	/* XXXX Multiply them */
}

static PyObject *
nl_div(nlobject *x, nlobject *y)
{
	/* XXXX Divide them */
}

static PyObject *
nl_mod(nlobject *x, nlobject *y)
{
	/* XXXX Modulo them */
}

static PyObject *
nl_divmod(nlobject *x, nlobject *y)
{
	/* XXXX Return 2-tuple with div and mod */
}

static PyObject *
nl_pow(nlobject *v, nlobject *w, nlobject *z)
{
	/* XXXX */
}				

static PyObject *
nl_neg(nlobject *v)
{
	/* XXXX */
}

static PyObject *
nl_pos(nlobject *v)
{
	/* XXXX */
}

static PyObject *
nl_abs(nlobject *v)
{
	/* XXXX */
}

static int
nl_nonzero(nlobject *v)
{
	/* XXXX Return 1 if non-zero */
}

static PyObject *
nl_invert(nlobject *v)
{
	/* XXXX */
}

static PyObject *
nl_lshift(nlobject *v, nlobject *w)
{
	/* XXXX */
}

static PyObject *
nl_rshift(nlobject *v, nlobject *w)
{
	/* XXXX */
}

static PyObject *
nl_and(nlobject *v, nlobject *w)
{
	/* XXXX */
}

static PyObject *
nl_xor(nlobject *v, nlobject *w)
{
	/* XXXX */
}

static PyObject *
nl_or(nlobject *v, nlobject *w)
{
	/* XXXX */
}

static PyObject *
nl_int(nlobject *v)
{
	/* XXXX */
}

static PyObject *
nl_long(nlobject *v)
{
	/* XXXX */
}

static PyObject *
nl_float(nlobject *v)
{
	/* XXXX */
}

static PyObject *
nl_oct(nlobject *v)
{
	/* XXXX Return object as octal stringobject */
}

static PyObject *
nl_hex(nlobject *v)
{
	/* XXXX Return object as hex stringobject */
}

static PyNumberMethods nl_as_number = {
	(binaryfunc)nl_add,	/*nb_add*/
	(binaryfunc)nl_sub,	/*nb_subtract*/
	(binaryfunc)nl_mul,	/*nb_multiply*/
	(binaryfunc)nl_div,	/*nb_divide*/
	(binaryfunc)nl_mod,	/*nb_remainder*/
	(binaryfunc)nl_divmod,	/*nb_divmod*/
	(ternaryfunc)nl_pow,	/*nb_power*/
	(unaryfunc)nl_neg,	/*nb_negative*/
	(unaryfunc)nl_pos,	/*nb_positive*/
	(unaryfunc)nl_abs,	/*nb_absolute*/
	(inquiry)nl_nonzero,	/*nb_nonzero*/
	(unaryfunc)nl_invert,	/*nb_invert*/
	(binaryfunc)nl_lshift,	/*nb_lshift*/
	(binaryfunc)nl_rshift,	/*nb_rshift*/
	(binaryfunc)nl_and,	/*nb_and*/
	(binaryfunc)nl_xor,	/*nb_xor*/
	(binaryfunc)nl_or,	/*nb_or*/
	(coercion)nl_coerce,	/*nb_coerce*/
	(unaryfunc)nl_int,	/*nb_int*/
	(unaryfunc)nl_long,	/*nb_long*/
	(unaryfunc)nl_float,	/*nb_float*/
	(unaryfunc)nl_oct,	/*nb_oct*/
	(unaryfunc)nl_hex,	/*nb_hex*/
};

/* ------------------------------------------------------- */

static char Nltype__doc__[] = 
""
;

static PyTypeObject Nltype = {
	PyObject_HEAD_INIT(&PyType_Type)
	0,				/*ob_size*/
	"number-like object",			/*tp_name*/
	sizeof(nlobject),		/*tp_basicsize*/
	0,				/*tp_itemsize*/
	/* methods */
	(destructor)0,	/*tp_dealloc*/
	(printfunc)0,		/*tp_print*/
	(getattrfunc)0,	/*tp_getattr*/
	(setattrfunc)0,	/*tp_setattr*/
	(cmpfunc)nl_compare,		/*tp_compare*/
	(reprfunc)nl_repr,		/*tp_repr*/
	&nl_as_number,			/*tp_as_number*/
	0,		/*tp_as_sequence*/
	0,		/*tp_as_mapping*/
	(hashfunc)0,		/*tp_hash*/
	(ternaryfunc)0,		/*tp_call*/
	(reprfunc)0,		/*tp_str*/

	/* Space for future expansion */
	0L,0L,0L,0L,
	Nltype__doc__ /* Documentation string */
};

/* End of code for number-like object objects */
/* -------------------------------------------------------- */


static char ot_method1__doc__[] = 
""
;

static PyObject *
ot_method1(otobject *self, PyObject *args)
{
	if (!PyArg_ParseTuple(args, ""))
		return NULL;
	Py_INCREF(Py_None);
	return Py_None;
}


static char ot_method2__doc__[] = 
""
;

static PyObject *
ot_method2(otobject *self, PyObject *args)
{
	if (!PyArg_ParseTuple(args, ""))
		return NULL;
	Py_INCREF(Py_None);
	return Py_None;
}


static struct PyMethodDef ot_methods[] = {
	{"method1",	(PyCFunction)ot_method1,	METH_VARARGS,	ot_method1__doc__},
 {"method2",	(PyCFunction)ot_method2,	METH_VARARGS,	ot_method2__doc__},
 
	{NULL,		NULL}		/* sentinel */
};

/* ---------- */


static otobject *
newotobject()
{
	otobject *self;
	
	self = PyObject_NEW(otobject, &Ottype);
	if (self == NULL)
		return NULL;
	/* XXXX Add your own initializers here */
	return self;
}


static void
ot_dealloc(otobject *self)
{
	/* XXXX Add your own cleanup code here */
	PyMem_DEL(self);
}

static int
ot_print(otobject *self, FILE *fp, int flags)
{
	/* XXXX Add code here to print self to fp */
	return 0;
}

static int
ot_compare(otobject *v, otobject *w)
{
	/* XXXX Compare objects and return -1, 0 or 1 */
}

static PyObject *
ot_repr(otobject *self)
{
	PyObject *s;

	/* XXXX Add code here to put self into s */
	return s;
}

static long
ot_hash(otobject *self)
{
	/* XXXX Return a hash of self (or -1) */
}

/* Code to handle accessing over-the-top object objects as sequence objects */

static int
ot_length(otobject *self)
{
	/* XXXX Return the size of the object */
}

static PyObject *
ot_concat(otobject *self, PyObject *bb)
{
	/* XXXX Return the concatenation of self and bb */
}

static PyObject *
ot_repeat(otobject *self, int n)
{
	/* XXXX Return a new object that is n times self */
}

static PyObject *
ot_item(otobject *self, int i)
{
	/* XXXX Return the i-th object of self */
}

static PyObject *
ot_slice(otobject *self, int ilow, int ihigh)
{
	/* XXXX Return the ilow..ihigh slice of self in a new object */
}

static int
ot_ass_item(otobject *self, int i, PyObject *v)
{
	/* XXXX Assign to the i-th element of self */
	return 0;
}

static int
ot_ass_slice(PyListObject *self, int ilow, int ihigh, PyObject *v)
{
	/* XXXX Replace ilow..ihigh slice of self with v */
	return 0;
}

static PySequenceMethods ot_as_sequence = {
	(inquiry)ot_length,		/*sq_length*/
	(binaryfunc)ot_concat,		/*sq_concat*/
	(intargfunc)ot_repeat,		/*sq_repeat*/
	(intargfunc)ot_item,		/*sq_item*/
	(intintargfunc)ot_slice,		/*sq_slice*/
	(intobjargproc)ot_ass_item,	/*sq_ass_item*/
	(intintobjargproc)ot_ass_slice,	/*sq_ass_slice*/
};

/* -------------------------------------------------------------- */

/* Code to access structure members by accessing attributes */

#include "structmember.h"

#define OFF(x) offsetof(XXXXobject, x)

static PyMemberDef ot_memberlist[] = {
	/* XXXX Add lines like { "foo", T_INT, OFF(foo), READONLY }  */

	{NULL}	/* Sentinel */
};

static PyObject *
ot_getattr(otobject *self, char *name)
{
	PyObject *rv;
	
	/* XXXX Add your own getattr code here */
	rv = PyMember_GetOne((char *)/*XXXX*/0, &ot_memberlist[i]);
	if (rv)
		return rv;
	PyErr_Clear();
	return Py_FindMethod(ot_methods, (PyObject *)self, name);
}


static int
ot_setattr(otobject *self, char *name, PyObject *v)
{
	/* XXXX Add your own setattr code here */
	if ( v == NULL ) {
		PyErr_SetString(PyExc_AttributeError, "Cannot delete attribute");
		return -1;
	}
	return PyMember_SetOne((char *)/*XXXX*/0, &ot_memberlist[i], v);
}

static char Ottype__doc__[] = 
""
;

static PyTypeObject Ottype = {
	PyObject_HEAD_INIT(&PyType_Type)
	0,				/*ob_size*/
	"over-the-top object",			/*tp_name*/
	sizeof(otobject),		/*tp_basicsize*/
	0,				/*tp_itemsize*/
	/* methods */
	(destructor)ot_dealloc,	/*tp_dealloc*/
	(printfunc)ot_print,		/*tp_print*/
	(getattrfunc)ot_getattr,	/*tp_getattr*/
	(setattrfunc)ot_setattr,	/*tp_setattr*/
	(cmpfunc)ot_compare,		/*tp_compare*/
	(reprfunc)ot_repr,		/*tp_repr*/
	0,			/*tp_as_number*/
	&ot_as_sequence,		/*tp_as_sequence*/
	0,		/*tp_as_mapping*/
	(hashfunc)ot_hash,		/*tp_hash*/
	(ternaryfunc)0,		/*tp_call*/
	(reprfunc)0,		/*tp_str*/

	/* Space for future expansion */
	0L,0L,0L,0L,
	Ottype__doc__ /* Documentation string */
};

/* End of code for over-the-top object objects */
/* -------------------------------------------------------- */


static char sample_newsimple__doc__[] =
""
;

static PyObject *
sample_newsimple(PyObject *self /* Not used */, PyObject *args)
{

	if (!PyArg_ParseTuple(args, ""))
		return NULL;
	Py_INCREF(Py_None);
	return Py_None;
}

static char sample_newnumberish__doc__[] =
""
;

static PyObject *
sample_newnumberish(PyObject *self /* Not used */, PyObject *args)
{

	if (!PyArg_ParseTuple(args, ""))
		return NULL;
	Py_INCREF(Py_None);
	return Py_None;
}

static char sample_newott__doc__[] =
""
;

static PyObject *
sample_newott(PyObject *self /* Not used */, PyObject *args)
{

	if (!PyArg_ParseTuple(args, ""))
		return NULL;
	Py_INCREF(Py_None);
	return Py_None;
}

/* List of methods defined in the module */

static struct PyMethodDef sample_methods[] = {
	{"newsimple",	(PyCFunction)sample_newsimple,	METH_VARARGS,	sample_newsimple__doc__},
 {"newnumberish",	(PyCFunction)sample_newnumberish,	METH_VARARGS,	sample_newnumberish__doc__},
 {"newott",	(PyCFunction)sample_newott,	METH_VARARGS,	sample_newott__doc__},
 
	{NULL,	 (PyCFunction)NULL, 0, NULL}		/* sentinel */
};


/* Initialization function for the module (*must* be called initsample) */

static char sample_module_documentation[] = 
""
;

void
initsample()
{
	PyObject *m, *d;

	/* Create the module and add the functions */
	m = Py_InitModule4("sample", sample_methods,
		sample_module_documentation,
		(PyObject*)NULL,PYTHON_API_VERSION);

	/* Add some symbolic constants to the module */
	d = PyModule_GetDict(m);
	ErrorObject = PyString_FromString("sample.error");
	PyDict_SetItemString(d, "error", ErrorObject);

	/* XXXX Add constants here */
	
	/* Check for errors */
	if (PyErr_Occurred())
		Py_FatalError("can't initialize module sample");
}

